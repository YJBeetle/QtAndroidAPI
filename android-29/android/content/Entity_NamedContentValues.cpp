#include "./ContentValues.hpp"
#include "../net/Uri.hpp"
#include "./Entity_NamedContentValues.hpp"

namespace android::content
{
	// Fields
	QAndroidJniObject Entity_NamedContentValues::uri()
	{
		return __thiz.getObjectField(
			"uri",
			"Landroid/net/Uri;"
		);
	}
	QAndroidJniObject Entity_NamedContentValues::values()
	{
		return __thiz.getObjectField(
			"values",
			"Landroid/content/ContentValues;"
		);
	}
	
	Entity_NamedContentValues::Entity_NamedContentValues(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Entity_NamedContentValues::Entity_NamedContentValues(android::net::Uri arg0, android::content::ContentValues arg1)
	{
		__thiz = QAndroidJniObject(
			"android.content.Entity$NamedContentValues",
			"(Landroid/net/Uri;Landroid/content/ContentValues;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
} // namespace android::content

