#include "./MatrixCursor.hpp"
#include "./MatrixCursor_RowBuilder.hpp"

namespace android::database
{
	// Fields
	
	// QAndroidJniObject forward
	MatrixCursor_RowBuilder::MatrixCursor_RowBuilder(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject MatrixCursor_RowBuilder::add(jobject arg0)
	{
		return callObjectMethod(
			"add",
			"(Ljava/lang/Object;)Landroid/database/MatrixCursor$RowBuilder;",
			arg0
		);
	}
	QAndroidJniObject MatrixCursor_RowBuilder::add(jstring arg0, jobject arg1)
	{
		return callObjectMethod(
			"add",
			"(Ljava/lang/String;Ljava/lang/Object;)Landroid/database/MatrixCursor$RowBuilder;",
			arg0,
			arg1
		);
	}
} // namespace android::database

