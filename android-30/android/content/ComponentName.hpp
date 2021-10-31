#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::content
{
	class Context;
}
namespace android::os
{
	class Parcel;
}

namespace android::content
{
	class ComponentName : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit ComponentName(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ComponentName(QJniObject obj);
		
		// Constructors
		ComponentName(android::os::Parcel arg0);
		ComponentName(android::content::Context arg0, jclass arg1);
		ComponentName(android::content::Context arg0, jstring arg1);
		ComponentName(jstring arg0, jstring arg1);
		
		// Methods
		static android::content::ComponentName createRelative(android::content::Context arg0, jstring arg1);
		static android::content::ComponentName createRelative(jstring arg0, jstring arg1);
		static android::content::ComponentName readFromParcel(android::os::Parcel arg0);
		static android::content::ComponentName unflattenFromString(jstring arg0);
		static void writeToParcel(android::content::ComponentName arg0, android::os::Parcel arg1);
		android::content::ComponentName clone();
		jint compareTo(android::content::ComponentName arg0);
		jint compareTo(jobject arg0);
		jint describeContents();
		jboolean equals(jobject arg0);
		jstring flattenToShortString();
		jstring flattenToString();
		jstring getClassName();
		jstring getPackageName();
		jstring getShortClassName();
		jint hashCode();
		jstring toShortString();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::content

