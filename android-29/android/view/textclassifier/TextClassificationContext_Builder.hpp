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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TextClassificationContext_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		TextClassificationContext_Builder(QAndroidJniObject obj);
		
		// Constructors
		TextClassificationContext_Builder(jstring arg0, jstring arg1);
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setWidgetVersion(jstring arg0);
	};
} // namespace android::view::textclassifier

