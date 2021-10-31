#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}
namespace java::lang
{
	class Boolean;
}
namespace java::lang
{
	class Byte;
}
namespace java::lang
{
	class Double;
}
namespace java::lang
{
	class Float;
}
namespace java::lang
{
	class Integer;
}
namespace java::lang
{
	class Long;
}
namespace java::lang
{
	class Short;
}

namespace android::content
{
	class ContentValues : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static jstring TAG();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ContentValues(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ContentValues(QAndroidJniObject obj);
		
		// Constructors
		ContentValues();
		ContentValues(android::content::ContentValues &arg0);
		ContentValues(jint arg0);
		
		// Methods
		void clear();
		jboolean containsKey(jstring arg0);
		jint describeContents();
		jboolean equals(jobject arg0);
		jobject get(jstring arg0);
		QAndroidJniObject getAsBoolean(jstring arg0);
		QAndroidJniObject getAsByte(jstring arg0);
		jbyteArray getAsByteArray(jstring arg0);
		QAndroidJniObject getAsDouble(jstring arg0);
		QAndroidJniObject getAsFloat(jstring arg0);
		QAndroidJniObject getAsInteger(jstring arg0);
		QAndroidJniObject getAsLong(jstring arg0);
		QAndroidJniObject getAsShort(jstring arg0);
		jstring getAsString(jstring arg0);
		jint hashCode();
		QAndroidJniObject keySet();
		void put(jstring arg0, jbyteArray arg1);
		void put(jstring arg0, java::lang::Boolean arg1);
		void put(jstring arg0, java::lang::Byte arg1);
		void put(jstring arg0, java::lang::Double arg1);
		void put(jstring arg0, java::lang::Float arg1);
		void put(jstring arg0, java::lang::Integer arg1);
		void put(jstring arg0, java::lang::Long arg1);
		void put(jstring arg0, java::lang::Short arg1);
		void put(jstring arg0, jstring arg1);
		void putAll(android::content::ContentValues arg0);
		void putNull(jstring arg0);
		void remove(jstring arg0);
		jint size();
		jstring toString();
		QAndroidJniObject valueSet();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::content

