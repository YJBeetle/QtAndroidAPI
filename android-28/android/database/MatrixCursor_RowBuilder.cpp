#include "./MatrixCursor.hpp"
#include "./MatrixCursor_RowBuilder.hpp"

namespace android::database
{
	// Fields
	
	// QJniObject forward
	MatrixCursor_RowBuilder::MatrixCursor_RowBuilder(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::database::MatrixCursor_RowBuilder MatrixCursor_RowBuilder::add(jobject arg0)
	{
		return callObjectMethod(
			"add",
			"(Ljava/lang/Object;)Landroid/database/MatrixCursor$RowBuilder;",
			arg0
		);
	}
	android::database::MatrixCursor_RowBuilder MatrixCursor_RowBuilder::add(jstring arg0, jobject arg1)
	{
		return callObjectMethod(
			"add",
			"(Ljava/lang/String;Ljava/lang/Object;)Landroid/database/MatrixCursor$RowBuilder;",
			arg0,
			arg1
		);
	}
} // namespace android::database

