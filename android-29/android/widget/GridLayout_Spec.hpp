#pragma once

#include "../../JObject.hpp"

namespace android::widget
{
	class GridLayout_Alignment;
}
class JObject;

namespace android::widget
{
	class GridLayout_Spec : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit GridLayout_Spec(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		GridLayout_Spec(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0) const;
		jint hashCode() const;
	};
} // namespace android::widget

