#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JString;

namespace android::view::inputmethod
{
	class InputBinding : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit InputBinding(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		InputBinding(QJniObject obj);
		
		// Constructors
		InputBinding(JObject arg0, android::view::inputmethod::InputBinding &arg1);
		InputBinding(JObject arg0, JObject arg1, jint arg2, jint arg3);
		
		// Methods
		jint describeContents() const;
		JObject getConnection() const;
		JObject getConnectionToken() const;
		jint getPid() const;
		jint getUid() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::view::inputmethod

