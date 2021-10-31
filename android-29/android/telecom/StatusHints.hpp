#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::graphics::drawable
{
	class Icon;
}
namespace android::os
{
	class Bundle;
}
namespace android::os
{
	class Parcel;
}

namespace android::telecom
{
	class StatusHints : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		StatusHints(QAndroidJniObject obj);
		// Constructors
		StatusHints(jstring arg0, android::graphics::drawable::Icon arg1, android::os::Bundle arg2);
		StatusHints() = default;
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		QAndroidJniObject getExtras();
		QAndroidJniObject getIcon();
		jstring getLabel();
		jint hashCode();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::telecom

