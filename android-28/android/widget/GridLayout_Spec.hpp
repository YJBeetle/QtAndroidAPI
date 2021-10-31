#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::widget
{
	class GridLayout_Alignment;
}

namespace android::widget
{
	class GridLayout_Spec : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit GridLayout_Spec(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		GridLayout_Spec(QJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean equals(jobject arg0);
		jint hashCode();
	};
} // namespace android::widget

