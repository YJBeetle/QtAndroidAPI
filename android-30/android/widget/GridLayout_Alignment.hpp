#pragma once

#include "../../JObject.hpp"

namespace android::widget
{
	class GridLayout_Alignment : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit GridLayout_Alignment(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		GridLayout_Alignment(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::widget

