#include "./MatrixCursor.hpp"
#include "./MatrixCursor_RowBuilder.hpp"

namespace android::database
{
	// Fields
	
	MatrixCursor_RowBuilder::MatrixCursor_RowBuilder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject MatrixCursor_RowBuilder::add(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"add",
			"(Ljava/lang/Object;)Landroid/database/MatrixCursor$RowBuilder;",
			arg0
		);
	}
	QAndroidJniObject MatrixCursor_RowBuilder::add(jstring arg0, jobject arg1)
	{
		return __thiz.callObjectMethod(
			"add",
			"(Ljava/lang/String;Ljava/lang/Object;)Landroid/database/MatrixCursor$RowBuilder;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject MatrixCursor_RowBuilder::add(const QString &arg0, jobject arg1)
	{
		return __thiz.callObjectMethod(
			"add",
			"(Ljava/lang/String;Ljava/lang/Object;)Landroid/database/MatrixCursor$RowBuilder;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
} // namespace android::database

