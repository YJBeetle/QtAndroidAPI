#pragma once

#include "../../JObject.hpp"

namespace android::view
{
	class View;
}
class JObject;
class JString;

namespace android::transition
{
	class TransitionValues : public JObject
	{
	public:
		// Fields
		JObject values();
		android::view::View view();
		
		// QJniObject forward
		template<typename ...Ts> explicit TransitionValues(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TransitionValues(QJniObject obj);
		
		// Constructors
		TransitionValues();
		TransitionValues(android::view::View arg0);
		
		// Methods
		jboolean equals(JObject arg0);
		jint hashCode();
		JString toString();
	};
} // namespace android::transition

