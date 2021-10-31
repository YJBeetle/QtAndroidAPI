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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TextSelection_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		TextSelection_Builder(QAndroidJniObject obj);
		
		// Constructors
		TextSelection_Builder(jint arg0, jint arg1);
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setEntityType(jstring arg0, jfloat arg1);
		QAndroidJniObject setExtras(android::os::Bundle arg0);
		QAndroidJniObject setId(jstring arg0);
	};
} // namespace android::view::textclassifier

