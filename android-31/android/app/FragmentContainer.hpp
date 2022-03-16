#pragma once

#include "../../JObject.hpp"

namespace android::view
{
	class View;
}

namespace android::app
{
	class FragmentContainer : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit FragmentContainer(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		FragmentContainer(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		FragmentContainer();
		
		// Methods
		android::view::View onFindViewById(jint arg0) const;
		jboolean onHasView() const;
	};
} // namespace android::app

