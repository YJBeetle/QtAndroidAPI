#include "./MatrixCursor.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./MatrixCursor_RowBuilder.hpp"

namespace android::database
{
	// Fields
	
	// QAndroidJniObject forward
	MatrixCursor_RowBuilder::MatrixCursor_RowBuilder(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::database::MatrixCursor_RowBuilder MatrixCursor_RowBuilder::add(JObject arg0)
	{
		return callObjectMethod(
			"add",
			"(Ljava/lang/Object;)Landroid/database/MatrixCursor$RowBuilder;",
			arg0.object<jobject>()
		);
	}
	android::database::MatrixCursor_RowBuilder MatrixCursor_RowBuilder::add(JString arg0, JObject arg1)
	{
		return callObjectMethod(
			"add",
			"(Ljava/lang/String;Ljava/lang/Object;)Landroid/database/MatrixCursor$RowBuilder;",
			arg0.object<jstring>(),
			arg1.object<jobject>()
		);
	}
} // namespace android::database

