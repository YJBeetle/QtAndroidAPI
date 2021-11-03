#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
namespace java::lang
{
	class ClassLoader;
}

namespace android::view
{
	class AbsSavedState : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static android::view::AbsSavedState EMPTY_STATE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AbsSavedState(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AbsSavedState(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		JObject getSuperState();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view

