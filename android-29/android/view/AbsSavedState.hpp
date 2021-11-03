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
		
		// QJniObject forward
		template<typename ...Ts> explicit AbsSavedState(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AbsSavedState(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		JObject getSuperState() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::view

