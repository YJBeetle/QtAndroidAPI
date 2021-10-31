#include "./QuickViewConstants.hpp"

namespace android::content
{
	// Fields
	jstring QuickViewConstants::FEATURE_DELETE()
	{
		return getStaticObjectField(
			"android.content.QuickViewConstants",
			"FEATURE_DELETE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring QuickViewConstants::FEATURE_DOWNLOAD()
	{
		return getStaticObjectField(
			"android.content.QuickViewConstants",
			"FEATURE_DOWNLOAD",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring QuickViewConstants::FEATURE_EDIT()
	{
		return getStaticObjectField(
			"android.content.QuickViewConstants",
			"FEATURE_EDIT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring QuickViewConstants::FEATURE_PRINT()
	{
		return getStaticObjectField(
			"android.content.QuickViewConstants",
			"FEATURE_PRINT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring QuickViewConstants::FEATURE_SEND()
	{
		return getStaticObjectField(
			"android.content.QuickViewConstants",
			"FEATURE_SEND",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring QuickViewConstants::FEATURE_VIEW()
	{
		return getStaticObjectField(
			"android.content.QuickViewConstants",
			"FEATURE_VIEW",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QJniObject forward
	QuickViewConstants::QuickViewConstants(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::content

