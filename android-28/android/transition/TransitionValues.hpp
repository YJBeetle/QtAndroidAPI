#pragma once

#include "../../JObject.hpp"

namespace android::view
{
	class View;
}

namespace android::transition
{
	class TransitionValues : public JObject
	{
	public:
		// Fields
		JObject values();
		android::view::View view();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TransitionValues(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TransitionValues(QAndroidJniObject obj);
		
		// Constructors
		TransitionValues();
		
		// Methods
		jboolean equals(jobject arg0);
		jint hashCode();
		jstring toString();
	};
} // namespace android::transition

