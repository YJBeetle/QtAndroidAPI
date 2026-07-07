#pragma once

#include "./TextView.def.hpp"

namespace android::content
{
	class Context;
}
namespace android::view
{
	class View;
}
class JString;
class JString;

namespace android::widget
{
	class Chronometer : public android::widget::TextView
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Chronometer(const char *className, const char *sig, Ts...agv) : android::widget::TextView(className, sig, std::forward<Ts>(agv)...) {}
		Chronometer(QJniObject obj) : android::widget::TextView(obj) {}
		
		// Constructors
		Chronometer(android::content::Context arg0);
		Chronometer(android::content::Context arg0, JObject arg1);
		Chronometer(android::content::Context arg0, JObject arg1, jint arg2);
		Chronometer(android::content::Context arg0, JObject arg1, jint arg2, jint arg3);
		
		// Methods
		JString getAccessibilityClassName() const;
		jlong getBase() const;
		JString getContentDescription() const;
		JString getFormat() const;
		JObject getOnChronometerTickListener() const;
		jboolean isCountDown() const;
		jboolean isTheFinalCountDown() const;
		void setBase(jlong arg0) const;
		void setCountDown(jboolean arg0) const;
		void setFormat(JString arg0) const;
		void setOnChronometerTickListener(JObject arg0) const;
		void start() const;
		void stop() const;
	};
} // namespace android::widget

