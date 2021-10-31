#pragma once

#include "../../__JniBaseClass.hpp"

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
	class AbsSavedState : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		static android::view::AbsSavedState EMPTY_STATE();
		
		// QJniObject forward
		template<typename ...Ts> explicit AbsSavedState(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		AbsSavedState(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		__JniBaseClass getSuperState();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view

