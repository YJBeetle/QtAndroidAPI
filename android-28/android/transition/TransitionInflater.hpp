#pragma once

#include "../../JObject.hpp"

namespace android::content
{
	class Context;
}
namespace android::transition
{
	class Transition;
}
namespace android::transition
{
	class TransitionManager;
}
namespace android::view
{
	class ViewGroup;
}

namespace android::transition
{
	class TransitionInflater : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit TransitionInflater(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TransitionInflater(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::transition::TransitionInflater from(android::content::Context arg0);
		android::transition::Transition inflateTransition(jint arg0) const;
		android::transition::TransitionManager inflateTransitionManager(jint arg0, android::view::ViewGroup arg1) const;
	};
} // namespace android::transition

