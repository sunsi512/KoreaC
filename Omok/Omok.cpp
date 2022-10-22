// Omok.cpp : 애플리케이션에 대한 진입점을 정의합니다.
//

#include "framework.h"
#include "Omok.h"

#define X_COUNT           19
#define Y_COUNT           19
#define X_VOID            50
#define Y_VOID            50
#define RADIUS            13
#define INTERVAL          26
#define XPOS(x) (X_VOID + (x) *INTERVAL)
#define YPOS(y) (Y_VOID + (y) *INTERVAL)

INT_PTR CALLBACK DlgProc(HWND hDlg, UINT message, WPARAM wParam, LPARAM lParam)
{
    static HBRUSH hBrush;      // 색깔넣기
    static HDC hdc;
    PAINTSTRUCT ps;
    UNREFERENCED_PARAMETER(lParam);
    switch (message)
    {
    case WM_PAINT:
    {
        hdc = BeginPaint(hDlg, &ps);

        // 그림을 그림
        for (int x = 0; x < X_COUNT; x++)
        {
            MoveToEx(hdc, XPOS(x), YPOS(0), NULL);
            LineTo(hdc, XPOS(x), YPOS(Y_COUNT - 1));
        }
        for (int y = 0; y < Y_COUNT; y++)
        {
            MoveToEx(hdc, XPOS(0), YPOS(y), NULL);
            LineTo(hdc, XPOS(X_COUNT - 1), YPOS(y));
        }

        EndPaint(hDlg, &ps);
    }
    break;
    case WM_LBUTTONDOWN:
        Ellipse(hdc, 250, 250, 350, 350);
        InvalidateRect(hDlg, NULL, TRUE);
        MessageBox(hDlg, _T("제목"), _T("내용"), NULL);
        break;
    case WM_INITDIALOG:            // 처음 실행할때 불리는 메시지
        SetWindowPos(hDlg, HWND_TOP, 50, 50, 600, 600, NULL);       // x1, y1, x2, y2
        hBrush = CreateSolidBrush(RGB(128, 128, 128));
        return (INT_PTR)TRUE;

    case WM_COMMAND:
        if (LOWORD(wParam) == IDOK || LOWORD(wParam) == IDCANCEL)
        {
            EndDialog(hDlg, LOWORD(wParam));
            return (INT_PTR)TRUE;
        }
        break;
    }
    return (INT_PTR)FALSE;
}

int APIENTRY _tWinMain(_In_ HINSTANCE hInstance,
                     _In_opt_ HINSTANCE hPrevInstance,
                     _In_ LPWSTR    lpCmdLine,
                     _In_ int       nCmdShow)
{
    DialogBox(hInstance, MAKEINTRESOURCE(IDD_DIALOG1), nullptr, DlgProc);
    return 0;
}