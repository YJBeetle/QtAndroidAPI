#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::app
{
	class Person_Builder;
}
namespace android::graphics::drawable
{
	class Icon;
}
namespace android::os
{
	class Parcel;
}

namespace android::app
{
	class Person : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Person(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Person(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		QAndroidJniObject getIcon();
		jstring getKey();
		jstring getName();
		jstring getUri();
		jint hashCode();
		jboolean isBot();
		jboolean isImportant();
		QAndroidJniObject toBuilder();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::app

