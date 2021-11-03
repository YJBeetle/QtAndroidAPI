#pragma once

#include "../../JObject.hpp"

namespace android::content
{
	class Context;
}
namespace android::view
{
	class View;
}
namespace android::view
{
	class ViewGroup;
}
class JString;

namespace android::view
{
	class LayoutInflater : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit LayoutInflater(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		LayoutInflater(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::view::LayoutInflater from(android::content::Context arg0);
		android::view::LayoutInflater cloneInContext(android::content::Context arg0);
		android::view::View createView(JString arg0, JString arg1, JObject arg2);
		android::view::View createView(android::content::Context arg0, JString arg1, JString arg2, JObject arg3);
		android::content::Context getContext();
		JObject getFactory();
		JObject getFactory2();
		JObject getFilter();
		android::view::View inflate(jint arg0, android::view::ViewGroup arg1);
		android::view::View inflate(JObject arg0, android::view::ViewGroup arg1);
		android::view::View inflate(jint arg0, android::view::ViewGroup arg1, jboolean arg2);
		android::view::View inflate(JObject arg0, android::view::ViewGroup arg1, jboolean arg2);
		android::view::View onCreateView(android::content::Context arg0, android::view::View arg1, JString arg2, JObject arg3);
		void setFactory(JObject arg0);
		void setFactory2(JObject arg0);
		void setFilter(JObject arg0);
	};
} // namespace android::view

