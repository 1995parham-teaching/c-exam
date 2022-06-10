\ProvidesClass{exam}
              [c exam theme]

\RequirePackage{minted}
\RequirePackage[dvipsnames]{xcolor}
\RequirePackage{graphicx}
\RequirePackage{enumerate}
\RequirePackage{keyval}

\LoadClass[]{article}

\RequirePackage{hyperref}
\RequirePackage[
 a4paper,
 left=2.2cm,
 right=2.2cm,
 top=2.5cm,
 bottom=2.5cm
]{geometry}

\RequirePackage[localise]{xepersian}

\newcommand\Extra{\textcolor{Orange}{امتیازی.}}
\newenvironment{extra}{
  \begin{quote}
  \color{Orange}
  \textbf{امتیازی.}
}{
  \end{quote}
}
\eqenvironment{امتیازی}{extra}

\newcommand\answer[2][]{\todo[inline, caption={2do}, #1]{
    \begin{persian}
    \begin{minipage}{\textwidth-4pt}
      پاسخ.
      #2
    \end{minipage}
    \end{persian}
  }
}

\setlength{\parindent}{0pt}
\renewcommand{\baselinestretch}{1.5}

\eqcommand{جزئیات‌آزمون}{examdetails}
\eqcommand{پایان‌ساز}{makefooter}
\eqcommand{تارنما}{href}

\define@key{exam}{دانشگاه}[]{\gdef\@university{#1}}
\define@key{exam}{ترم}[]{\gdef\@semester{#1}}
\define@key{exam}{زمان}[]{\gdef\@duration{#1}}
\define@key{exam}{نام}[]{\gdef\@exam{#1}}
\def\examdetails#1{{\setkeys{exam}{#1}}}

\renewcommand{\maketitle}{%
  \begin{center}
    \vspace*{1cm}

    \Huge\textbf{\@title}

    \vspace{0.5cm}
    \Large
    \@exam\\
    \@semester\\
    \@date

    \vspace{1.5cm}

    \textbf{\@author}

    \@ifundefined{@duration}{}{%
    زمان آزمون: \@duration\space دقیقه
    }

    \vspace{0.8cm}

    \@university
  \end{center}
}

\newcommand{\makefooter}{%
  \vfill
  \begin{flushleft}
    موفق و موید باشید
  \end{flushleft}
  \begin{center}
    این سند برپایه بسته \متن‌لاتین{\زی‌پرشین} گونه \متن‌لاتین{\گونه‌زی‌پرشین} توسعه پیدا کرده است.
    نگارش شده به تاریخ \@date
  \end{center}
}

\settextfont{Vazirmatn}
\setlatintextfont{Roboto}
