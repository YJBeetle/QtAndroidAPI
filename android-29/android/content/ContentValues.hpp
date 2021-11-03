#pragma once

#include "../../JObject.hpp"

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
	class ContentValues : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jstring TAG();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ContentValues(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
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
		java::lang::Boolean getAsBoolean(jstring arg0);
		java::lang::Byte getAsByte(jstring arg0);
		jbyteArray getAsByteArray(jstring arg0);
		java::lang::Double getAsDouble(jstring arg0);
		java::lang::Float getAsFloat(jstring arg0);
		java::lang::Integer getAsInteger(jstring arg0);
		java::lang::Long getAsLong(jstring arg0);
		java::lang::Short getAsShort(jstring arg0);
		jstring getAsString(jstring arg0);
		jint hashCode();
		JObject keySet();
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
		JObject valueSet();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::content

