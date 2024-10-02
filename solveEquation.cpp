string solve_equation_wrong(double a1, double b1, double c1,
                      double a2, double b2, double c2)
{
    ///Lỗi cấy : bỏ qua trường hợp hệ phương trình là hệ phương trình không phục thuộc vào ẩn có dang
    /// 0x + 0y = 0 hoặc 0x + 0y = a
    /// 0x + 0y = a      0x + 0y = 0D

    ///Lỗi cấy: bỏ qua đầu vào không hợp lệ

    double D = a1 * a2 - b2 * b1; /// Lỗi cấy: sai công thức so với đặc tả ,,, sih test thì xóa
    double Dx = c1 * b2 - c2 * b1;
    double Dy = a1 * c2 - a2 * c1;

    if (D == 0)
    {
        if (Dx == 0 && Dy == 0)
            return "He phuong trinh co vo so nghiem";
        else
            return "He phuong trinh vo nghiem";
    }
    else
    {
        double ansX = Dx / D;
        double ansY = Dy / D;

        return "He phuong trinh co 2 nghiem la: " + to_string(ansX) + ", " + to_string(ansY);
    }
}
