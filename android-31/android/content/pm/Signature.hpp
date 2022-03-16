#pragma once

#include "../../../JObject.hpp"

class JByteArray;
class JCharArray;
class JIntArray;
namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::content::pm
{
	class Signature : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Signature(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Signature(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		Signature(JByteArray arg0);
		Signature(JString arg0);
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		jint hashCode() const;
		JByteArray toByteArray() const;
		JCharArray toChars() const;
		JCharArray toChars(JCharArray arg0, JIntArray arg1) const;
		JString toCharsString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::content::pm

