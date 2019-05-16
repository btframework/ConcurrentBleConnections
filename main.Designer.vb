<Global.Microsoft.VisualBasic.CompilerServices.DesignerGenerated()> _
Partial Class fmMain
    Inherits System.Windows.Forms.Form

    'Form overrides dispose to clean up the component list.
    <System.Diagnostics.DebuggerNonUserCode()> _
    Protected Overrides Sub Dispose(ByVal disposing As Boolean)
        Try
            If disposing AndAlso components IsNot Nothing Then
                components.Dispose()
            End If
        Finally
            MyBase.Dispose(disposing)
        End Try
    End Sub

    'Required by the Windows Form Designer
    Private components As System.ComponentModel.IContainer

    'NOTE: The following procedure is required by the Windows Form Designer
    'It can be modified using the Windows Form Designer.  
    'Do not modify it using the code editor.
    <System.Diagnostics.DebuggerStepThrough()> _
    Private Sub InitializeComponent()
        Me.btStart = New System.Windows.Forms.Button
        Me.btStop = New System.Windows.Forms.Button
        Me.btClear = New System.Windows.Forms.Button
        Me.lbLog = New System.Windows.Forms.ListBox
        Me.SuspendLayout()
        '
        'btStart
        '
        Me.btStart.Location = New System.Drawing.Point(12, 12)
        Me.btStart.Name = "btStart"
        Me.btStart.Size = New System.Drawing.Size(75, 23)
        Me.btStart.TabIndex = 0
        Me.btStart.Text = "Start"
        Me.btStart.UseVisualStyleBackColor = True
        '
        'btStop
        '
        Me.btStop.Location = New System.Drawing.Point(93, 12)
        Me.btStop.Name = "btStop"
        Me.btStop.Size = New System.Drawing.Size(75, 23)
        Me.btStop.TabIndex = 1
        Me.btStop.Text = "Stop"
        Me.btStop.UseVisualStyleBackColor = True
        '
        'btClear
        '
        Me.btClear.Location = New System.Drawing.Point(505, 12)
        Me.btClear.Name = "btClear"
        Me.btClear.Size = New System.Drawing.Size(75, 23)
        Me.btClear.TabIndex = 2
        Me.btClear.Text = "Clear"
        Me.btClear.UseVisualStyleBackColor = True
        '
        'lbLog
        '
        Me.lbLog.FormattingEnabled = True
        Me.lbLog.Location = New System.Drawing.Point(12, 41)
        Me.lbLog.Name = "lbLog"
        Me.lbLog.Size = New System.Drawing.Size(568, 329)
        Me.lbLog.TabIndex = 3
        '
        'fmMain
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(6.0!, 13.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.ClientSize = New System.Drawing.Size(592, 389)
        Me.Controls.Add(Me.lbLog)
        Me.Controls.Add(Me.btClear)
        Me.Controls.Add(Me.btStop)
        Me.Controls.Add(Me.btStart)
        Me.FormBorderStyle = System.Windows.Forms.FormBorderStyle.FixedSingle
        Me.Name = "fmMain"
        Me.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen
        Me.Text = "Concurrent BLE connections demo"
        Me.ResumeLayout(False)

    End Sub
    Friend WithEvents btStart As System.Windows.Forms.Button
    Friend WithEvents btStop As System.Windows.Forms.Button
    Friend WithEvents btClear As System.Windows.Forms.Button
    Friend WithEvents lbLog As System.Windows.Forms.ListBox

End Class
