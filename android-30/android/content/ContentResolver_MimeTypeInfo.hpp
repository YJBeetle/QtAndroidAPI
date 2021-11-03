#pragma once

#include "../../JObject.hpp"

namespace android::graphics::drawable
{
	class Icon;
}

namespace android::content
{
	class ContentResolver_MimeTypeInfo : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ContentResolver_MimeTypeInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ContentResolver_MimeTypeInfo(QJniObject obj);
		
		// Constructors
		
		// Methods
		jstring getContentDescription();
		android::graphics::drawable::Icon getIcon();
		jstring getLabel();
	};
} // namespace android::content

