#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::view::textclassifier
{
	class TextClassificationContext;
}

namespace android::view::textclassifier
{
	class TextClassificationContext_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit TextClassificationContext_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		TextClassificationContext_Builder(QJniObject obj);
		
		// Constructors
		TextClassificationContext_Builder(jstring arg0, jstring arg1);
		
		// Methods
		android::view::textclassifier::TextClassificationContext build();
		android::view::textclassifier::TextClassificationContext_Builder setWidgetVersion(jstring arg0);
	};
} // namespace android::view::textclassifier

