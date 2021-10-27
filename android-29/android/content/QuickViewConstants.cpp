#include "./QuickViewConstants.hpp"

namespace android::content
{
	// Fields
	jstring QuickViewConstants::FEATURE_DELETE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.QuickViewConstants",
			"FEATURE_DELETE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring QuickViewConstants::FEATURE_DOWNLOAD()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.QuickViewConstants",
			"FEATURE_DOWNLOAD",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring QuickViewConstants::FEATURE_EDIT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.QuickViewConstants",
			"FEATURE_EDIT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring QuickViewConstants::FEATURE_PRINT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.QuickViewConstants",
			"FEATURE_PRINT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring QuickViewConstants::FEATURE_SEND()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.QuickViewConstants",
			"FEATURE_SEND",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring QuickViewConstants::FEATURE_VIEW()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.QuickViewConstants",
			"FEATURE_VIEW",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	QuickViewConstants::QuickViewConstants(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
} // namespace android::content

