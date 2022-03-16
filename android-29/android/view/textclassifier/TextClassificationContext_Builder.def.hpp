#pragma once

#include "../../../JObject.hpp"

namespace android::view::textclassifier
{
	class TextClassificationContext;
}
class JString;

namespace android::view::textclassifier
{
	class TextClassificationContext_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit TextClassificationContext_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TextClassificationContext_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		TextClassificationContext_Builder(JString arg0, JString arg1);
		
		// Methods
		android::view::textclassifier::TextClassificationContext build() const;
		android::view::textclassifier::TextClassificationContext_Builder setWidgetVersion(JString arg0) const;
	};
} // namespace android::view::textclassifier

