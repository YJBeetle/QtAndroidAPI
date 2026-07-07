#pragma once

#include "../../JObject.hpp"

class JObject;

namespace android::app
{
	class Notification_ProgressStyle_Point : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Notification_ProgressStyle_Point(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Notification_ProgressStyle_Point(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		Notification_ProgressStyle_Point(jint arg0);
		
		// Methods
		jboolean equals(JObject arg0) const;
		jint getColor() const;
		jint getId() const;
		jint getPosition() const;
		jint hashCode() const;
		android::app::Notification_ProgressStyle_Point setColor(jint arg0) const;
		android::app::Notification_ProgressStyle_Point setId(jint arg0) const;
	};
} // namespace android::app

