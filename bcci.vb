Imports System

Module Program

    Sub Main()
        Dim ContinueInquiry As Char

        Do
            Console.Clear()
            Dim EmployeeName As String
            Dim CompanyName As String
            Dim MonthlySalary As Double
            Dim TaxResult As Double
            Dim SSSResult As Double
            Dim PagIbigResult As Double
            Dim PhilHealthResult As Double

            Console.WriteLine("=========================== WELCOME TO BCCI! ===========================" & vbCrLf)
            Console.Write("NAME OF EMPLOYEE: ")
            EmployeeName = Console.ReadLine()
            Console.Write("COMPANY NAME: ")
            CompanyName = Console.ReadLine()
            Console.Write("MONTHLY SALARY: ₱ ")
            MonthlySalary = Convert.ToDouble(Console.ReadLine())

            TaxResult = IncomeTax(MonthlySalary)
            Console.WriteLine(vbCrLf & vbTab & vbTab & "INCOME TAX: ₱ " & (TaxResult / 12).ToString("F2"))

            SSSResult = SSSContribution(MonthlySalary)
            Console.WriteLine(vbCrLf & vbTab & vbTab & "SSS CONTRIBUTION: ₱ " & SSSResult.ToString("F2"))

            PagIbigResult = PagIbigContribution(MonthlySalary)
            Console.WriteLine(vbCrLf & vbTab & vbTab & "PAG-IBIG: ₱ " & PagIbigResult.ToString("F2"))

            PhilHealthResult = PhilHealthContribution(MonthlySalary)
            Console.WriteLine(vbCrLf & vbTab & vbTab & "PHILHEALTH: ₱ " & PhilHealthResult.ToString("F2"))

            Console.Write(vbCrLf & vbCrLf & "DO YOU WANT TO MAKE ANOTHER INQUIRY [Y/N]? ")
            ContinueInquiry = Console.ReadLine().ToUpper()(0)
        Loop While ContinueInquiry = "Y"

    End Sub

    ' INCOME TAX
    Function IncomeTax(MonthlySalary As Double) As Double
        Dim annualSalary As Double = MonthlySalary * 12
        Dim resultTax As Double = 0

        If annualSalary < 250000 Then
            resultTax = 0
        ElseIf annualSalary >= 250000 AndAlso annualSalary < 400000 Then
            resultTax = (annualSalary - 250000) * 0.2
        ElseIf annualSalary >= 400000 AndAlso annualSalary < 800000 Then
            resultTax = (annualSalary - 400000) * 0.25 + 30000
        ElseIf annualSalary >= 800000 AndAlso annualSalary < 2000000 Then
            resultTax = (annualSalary - 800000) * 0.3 + 130000
        ElseIf annualSalary >= 2000000 AndAlso annualSalary < 8000000 Then
            resultTax = (annualSalary - 2000000) * 0.32 + 490000
        Else
            resultTax = (annualSalary - 8000000) * 0.35 + 2410000
        End If

        Return resultTax
    End Function

    ' SSS CONTRIBUTION
    Function SSSContribution(MonthlySalary As Double) As Double
        Dim salary As Double = MonthlySalary
        Dim contribution As Double

        Select Case salary
            Case < 2250
                contribution = 80
            Case 2250 To 2750
                contribution = 100
            Case 2750 To 3250
                contribution = 120
            Case 3250 To 3750
                contribution = 100
            Case 3750 To 4250
                contribution = 100
            Case 4250 To 4750
                contribution = 100
            Case 4750 To 5250
                contribution = 100
            Case 5250 To 5750
                contribution = 100
            Case 5750 To 6250
                contribution = 100
            Case 6250 To 6750
                contribution = 100
            Case 6750 To 7250
                contribution = 100
            Case 7250 To 7750
                contribution = 100
            Case 7750 To 8250
                contribution = 100
            Case 8250 To 8750
                contribution = 100
            Case 8750 To 9250
                contribution = 100
            Case 9250 To 9750
                contribution = 100
            Case 9750 To 10250
                contribution = 100
            Case 10250 To 10750
                contribution = 100
            Case 10750 To 11250
                contribution = 100
            Case 11250 To 11750
                contribution = 100
            Case 11750 To 12250
                contribution = 100
            Case 12250 To 12750
                contribution = 100
            Case 12750 To 13250
                contribution = 100
            Case 13250 To 13750
                contribution = 100
            Case 13750 To 14250
                contribution = 100
            Case 14250 To 14750
                contribution = 100
            Case 14750 To 15250
                contribution = 100
            Case 15250 To 15750
                contribution = 100
            Case 15750 To 16250
                contribution = 100
            Case 16250 To 16750
                contribution = 100
            Case 16750 To 17250
                contribution = 100
            Case 17250 To 17750
                contribution = 100
            Case 17750 To 18250
                contribution = 100
            Case 18250 To 18750
                contribution = 100
            Case 18750 To 19250
                contribution = 760
            Case 19250 To 19750
                contribution = 780
            Case Else
                contribution = 800
        End Select

        Return contribution
    End Function

    ' PAG-IBIG
    Function PagIbigContribution(MonthlySalary As Double) As Double
        Dim contribution As Double

        If MonthlySalary <= 1500 Then
            contribution = MonthlySalary * 0.01
        Else
            contribution = MonthlySalary * 0.02
        End If

        Return contribution
    End Function

    ' PHILHEALTH
    Function PhilHealthContribution(MonthlySalary As Double) As Double
        Dim salary As Double = MonthlySalary
        Dim contribution As Double

        Select Case salary
            Case < 8999.99
                contribution = 100
            Case 9000.0 To 9999.99
                contribution = 112.5
            Case 10000.0 To 10999.99
                contribution = 125
            Case 11000.0 To 11999.99
                contribution = 137.5
            Case 12000.0 To 12999.99
                contribution = 150
            Case 13000.0 To 13999.99
                contribution = 162.5
            Case 14000.0 To 14999.99
                contribution = 175
            Case 15000.0 To 15999.99
                contribution = 187.5
            Case 16000.0 To 16999.99
                contribution = 200
            Case 17000.0 To 17999.99
                contribution = 212.5
            Case 18000.0 To 18999.99
                contribution = 225
            Case 19000.0 To 19999.99
                contribution = 237.5
            Case 20000.0 To 20999.99
                contribution = 250
            Case 21000.0 To 21999.99
                contribution = 262.5
            Case 22000.0 To 22999.99
                contribution = 275
            Case 23000.0 To 23999.99
                contribution = 287.5
            Case 24000.0 To 24999.99
                contribution = 300
            Case 25000.0 To 25999.99
                contribution = 312.5
            Case 26000.0 To 26999.99
                contribution = 325
            Case 27000.0 To 27999.99
                contribution = 337.5
            Case 28000.0 To 28999.99
                contribution = 350
            Case 29000.0 To 29999.99
                contribution = 362.5
            Case 30000.0 To 30999.99
                contribution = 375
            Case 31000.0 To 31999.99
                contribution = 387.5
            Case 32000.0 To 32999.99
                contribution = 400
            Case 33000.0 To 33999.99
                contribution = 412.5
            Case 34000.0 To 34999.99
                contribution = 425
            Case Else
                contribution = 437.5
        End Select

        Return contribution
    End Function

End Module