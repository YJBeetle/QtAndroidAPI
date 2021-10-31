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
		
		TextClassificationContext_Builder(QAndroidJniObject obj);
		// Constructors
		TextClassificationContext_Builder(jstring arg0, jstring arg1);
		TextClassificationContext_Builder() = default;
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setWidgetVersion(jstring arg0);
	};
} // namespace android::view::textclassifier

