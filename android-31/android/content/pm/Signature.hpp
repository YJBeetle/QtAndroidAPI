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
		
		// QJniObject forward
		template<typename ...Ts> explicit Signature(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Signature(QJniObject obj);
		
		// Constructors
		Signature(JByteArray arg0);
		Signature(JString arg0);
		
		// Methods
		jint describeContents();
		jboolean equals(JObject arg0);
		jint hashCode();
		JByteArray toByteArray();
		JCharArray toChars();
		JCharArray toChars(JCharArray arg0, JIntArray arg1);
		JString toCharsString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::content::pm

