#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::os
{
	class Bundle;
}
namespace android::view::textclassifier
{
	class TextSelection;
}

namespace android::view::textclassifier
{
	class TextSelection_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		TextSelection_Builder(QAndroidJniObject obj);
		// Constructors
		TextSelection_Builder(jint &arg0, jint &arg1);
		TextSelection_Builder() = default;
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setEntityType(jstring arg0, jfloat arg1);
		QAndroidJniObject setEntityType(const QString &arg0, jfloat arg1);
		QAndroidJniObject setExtras(android::os::Bundle arg0);
		QAndroidJniObject setId(jstring arg0);
		QAndroidJniObject setId(const QString &arg0);
	};
} // namespace android::view::textclassifier

