#include "../graphics/drawable/Icon.hpp"
#include "../../JString.hpp"
#include "./ContentResolver_MimeTypeInfo.hpp"

namespace android::content
{
	// Fields
	
	// QJniObject forward
	ContentResolver_MimeTypeInfo::ContentResolver_MimeTypeInfo(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JString ContentResolver_MimeTypeInfo::getContentDescription() const
	{
		return callObjectMethod(
			"getContentDescription",
			"()Ljava/lang/CharSequence;"
		);
	}
	android::graphics::drawable::Icon ContentResolver_MimeTypeInfo::getIcon() const
	{
		return callObjectMethod(
			"getIcon",
			"()Landroid/graphics/drawable/Icon;"
		);
	}
	JString ContentResolver_MimeTypeInfo::getLabel() const
	{
		return callObjectMethod(
			"getLabel",
			"()Ljava/lang/CharSequence;"
		);
	}
} // namespace android::content

