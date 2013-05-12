#ifndef MARKDOWNMANIPULATOR_H
#define MARKDOWNMANIPULATOR_H

class QPlainTextEdit;
class QString;

class MarkdownManipulator
{
public:
    explicit MarkdownManipulator(QPlainTextEdit *editor);

    void wrapSelectedText(const QString &tag);

private:
    QPlainTextEdit *editor;
};

#endif // MARKDOWNMANIPULATOR_H