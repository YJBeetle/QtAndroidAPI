#pragma once

#include "../../JObject.hpp"
#include "./AbsSavedState.hpp"

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
	class View_BaseSavedState : public android::view::AbsSavedState
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit View_BaseSavedState(const char *className, const char *sig, Ts...agv) : android::view::AbsSavedState(className, sig, std::forward<Ts>(agv)...) {}
		View_BaseSavedState(QJniObject obj);
		
		// Constructors
		View_BaseSavedState(android::os::Parcel arg0);
		View_BaseSavedState(JObject arg0);
		View_BaseSavedState(android::os::Parcel arg0, java::lang::ClassLoader arg1);
		
		// Methods
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view

