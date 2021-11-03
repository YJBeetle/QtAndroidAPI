#pragma once

#include "../JObject.hpp"

namespace android
{
	class R_dimen : public JObject
	{
	public:
		// Fields
		static jint app_icon_size();
		static jint dialog_min_width_major();
		static jint dialog_min_width_minor();
		static jint notification_large_icon_height();
		static jint notification_large_icon_width();
		static jint system_app_widget_background_radius();
		static jint system_app_widget_inner_radius();
		static jint thumbnail_height();
		static jint thumbnail_width();
		
		// QJniObject forward
		template<typename ...Ts> explicit R_dimen(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		R_dimen(QJniObject obj);
		
		// Constructors
		R_dimen();
		
		// Methods
	};
} // namespace android

