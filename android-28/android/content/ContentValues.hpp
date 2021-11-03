#pragma once

#include "../../JObject.hpp"

class JByteArray;
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
class JObject;
namespace java::lang
{
	class Short;
}
class JString;

namespace android::content
{
	class ContentValues : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static JString TAG();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ContentValues(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ContentValues(QAndroidJniObject obj);
		
		// Constructors
		ContentValues();
		ContentValues(android::content::ContentValues &arg0);
		ContentValues(jint arg0);
		
		// Methods
		void clear();
		jboolean containsKey(JString arg0);
		jint describeContents();
		jboolean equals(JObject arg0);
		JObject get(JString arg0);
		java::lang::Boolean getAsBoolean(JString arg0);
		java::lang::Byte getAsByte(JString arg0);
		JByteArray getAsByteArray(JString arg0);
		java::lang::Double getAsDouble(JString arg0);
		java::lang::Float getAsFloat(JString arg0);
		java::lang::Integer getAsInteger(JString arg0);
		java::lang::Long getAsLong(JString arg0);
		java::lang::Short getAsShort(JString arg0);
		JString getAsString(JString arg0);
		jint hashCode();
		JObject keySet();
		void put(JString arg0, JByteArray arg1);
		void put(JString arg0, java::lang::Boolean arg1);
		void put(JString arg0, java::lang::Byte arg1);
		void put(JString arg0, java::lang::Double arg1);
		void put(JString arg0, java::lang::Float arg1);
		void put(JString arg0, java::lang::Integer arg1);
		void put(JString arg0, java::lang::Long arg1);
		void put(JString arg0, java::lang::Short arg1);
		void put(JString arg0, JString arg1);
		void putAll(android::content::ContentValues arg0);
		void putNull(JString arg0);
		void remove(JString arg0);
		jint size();
		JString toString();
		JObject valueSet();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::content

