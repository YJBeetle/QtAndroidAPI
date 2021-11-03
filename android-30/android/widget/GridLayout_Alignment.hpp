#pragma once

#include "../../JObject.hpp"


namespace android::widget
{
	class GridLayout_Alignment : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit GridLayout_Alignment(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		GridLayout_Alignment(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::widget

