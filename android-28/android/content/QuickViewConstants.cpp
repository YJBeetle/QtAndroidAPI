#include "../../JString.hpp"
#include "./QuickViewConstants.hpp"

namespace android::content
{
	// Fields
	JString QuickViewConstants::FEATURE_DELETE()
	{
		return getStaticObjectField(
			"android.content.QuickViewConstants",
			"FEATURE_DELETE",
			"Ljava/lang/String;"
		);
	}
	JString QuickViewConstants::FEATURE_DOWNLOAD()
	{
		return getStaticObjectField(
			"android.content.QuickViewConstants",
			"FEATURE_DOWNLOAD",
			"Ljava/lang/String;"
		);
	}
	JString QuickViewConstants::FEATURE_EDIT()
	{
		return getStaticObjectField(
			"android.content.QuickViewConstants",
			"FEATURE_EDIT",
			"Ljava/lang/String;"
		);
	}
	JString QuickViewConstants::FEATURE_PRINT()
	{
		return getStaticObjectField(
			"android.content.QuickViewConstants",
			"FEATURE_PRINT",
			"Ljava/lang/String;"
		);
	}
	JString QuickViewConstants::FEATURE_SEND()
	{
		return getStaticObjectField(
			"android.content.QuickViewConstants",
			"FEATURE_SEND",
			"Ljava/lang/String;"
		);
	}
	JString QuickViewConstants::FEATURE_VIEW()
	{
		return getStaticObjectField(
			"android.content.QuickViewConstants",
			"FEATURE_VIEW",
			"Ljava/lang/String;"
		);
	}
	
	// QJniObject forward
	QuickViewConstants::QuickViewConstants(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::content

