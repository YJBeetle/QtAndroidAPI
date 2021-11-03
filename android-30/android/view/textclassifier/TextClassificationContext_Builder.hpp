#pragma once

#include "../../../JObject.hpp"

namespace android::view::textclassifier
{
	class TextClassificationContext;
}

namespace android::view::textclassifier
{
	class TextClassificationContext_Builder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TextClassificationContext_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TextClassificationContext_Builder(QAndroidJniObject obj);
		
		// Constructors
		TextClassificationContext_Builder(jstring arg0, jstring arg1);
		
		// Methods
		android::view::textclassifier::TextClassificationContext build();
		android::view::textclassifier::TextClassificationContext_Builder setWidgetVersion(jstring arg0);
	};
} // namespace android::view::textclassifier

