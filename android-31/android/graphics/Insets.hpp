#pragma once

#include "../../JObject.hpp"

namespace android::graphics
{
	class Rect;
}
namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::graphics
{
	class Insets : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static android::graphics::Insets NONE();
		jint bottom();
		jint left();
		jint right();
		jint top();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Insets(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Insets(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::graphics::Insets add(android::graphics::Insets arg0, android::graphics::Insets arg1);
		static android::graphics::Insets max(android::graphics::Insets arg0, android::graphics::Insets arg1);
		static android::graphics::Insets min(android::graphics::Insets arg0, android::graphics::Insets arg1);
		static android::graphics::Insets of(android::graphics::Rect arg0);
		static android::graphics::Insets of(jint arg0, jint arg1, jint arg2, jint arg3);
		static android::graphics::Insets subtract(android::graphics::Insets arg0, android::graphics::Insets arg1);
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		jint hashCode() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::graphics

