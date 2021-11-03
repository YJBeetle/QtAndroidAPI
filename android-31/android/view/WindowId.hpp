#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
namespace android::view
{
	class WindowId_FocusObserver;
}
class JObject;
class JString;

namespace android::view
{
	class WindowId : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit WindowId(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WindowId(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jboolean equals(JObject arg0);
		jint hashCode();
		jboolean isFocused();
		void registerFocusObserver(android::view::WindowId_FocusObserver arg0);
		JString toString();
		void unregisterFocusObserver(android::view::WindowId_FocusObserver arg0);
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view

