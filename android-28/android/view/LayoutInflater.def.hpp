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
		
		// QJniObject forward
		template<typename ...Ts> explicit LayoutInflater(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		LayoutInflater(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static android::view::LayoutInflater from(android::content::Context arg0);
		android::view::LayoutInflater cloneInContext(android::content::Context arg0) const;
		android::view::View createView(JString arg0, JString arg1, JObject arg2) const;
		android::content::Context getContext() const;
		JObject getFactory() const;
		JObject getFactory2() const;
		JObject getFilter() const;
		android::view::View inflate(jint arg0, android::view::ViewGroup arg1) const;
		android::view::View inflate(JObject arg0, android::view::ViewGroup arg1) const;
		android::view::View inflate(jint arg0, android::view::ViewGroup arg1, jboolean arg2) const;
		android::view::View inflate(JObject arg0, android::view::ViewGroup arg1, jboolean arg2) const;
		void setFactory(JObject arg0) const;
		void setFactory2(JObject arg0) const;
		void setFilter(JObject arg0) const;
	};
} // namespace android::view

