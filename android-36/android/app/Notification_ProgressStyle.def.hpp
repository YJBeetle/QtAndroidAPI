#pragma once

#include "./Notification_Style.def.hpp"

namespace android::app
{
	class Notification_ProgressStyle_Point;
}
namespace android::app
{
	class Notification_ProgressStyle_Segment;
}
namespace android::graphics::drawable
{
	class Icon;
}

namespace android::app
{
	class Notification_ProgressStyle : public android::app::Notification_Style
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Notification_ProgressStyle(const char *className, const char *sig, Ts...agv) : android::app::Notification_Style(className, sig, std::forward<Ts>(agv)...) {}
		Notification_ProgressStyle(QJniObject obj) : android::app::Notification_Style(obj) {}
		
		// Constructors
		Notification_ProgressStyle();
		
		// Methods
		android::app::Notification_ProgressStyle addProgressPoint(android::app::Notification_ProgressStyle_Point arg0) const;
		android::app::Notification_ProgressStyle addProgressSegment(android::app::Notification_ProgressStyle_Segment arg0) const;
		jint getProgress() const;
		android::graphics::drawable::Icon getProgressEndIcon() const;
		jint getProgressMax() const;
		JObject getProgressPoints() const;
		JObject getProgressSegments() const;
		android::graphics::drawable::Icon getProgressStartIcon() const;
		android::graphics::drawable::Icon getProgressTrackerIcon() const;
		jboolean isProgressIndeterminate() const;
		jboolean isStyledByProgress() const;
		android::app::Notification_ProgressStyle setProgress(jint arg0) const;
		android::app::Notification_ProgressStyle setProgressEndIcon(android::graphics::drawable::Icon arg0) const;
		android::app::Notification_ProgressStyle setProgressIndeterminate(jboolean arg0) const;
		android::app::Notification_ProgressStyle setProgressPoints(JObject arg0) const;
		android::app::Notification_ProgressStyle setProgressSegments(JObject arg0) const;
		android::app::Notification_ProgressStyle setProgressStartIcon(android::graphics::drawable::Icon arg0) const;
		android::app::Notification_ProgressStyle setProgressTrackerIcon(android::graphics::drawable::Icon arg0) const;
		android::app::Notification_ProgressStyle setStyledByProgress(jboolean arg0) const;
	};
} // namespace android::app

