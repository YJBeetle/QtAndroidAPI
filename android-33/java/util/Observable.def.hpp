#pragma once

#include "../../JObject.hpp"

class JObject;
namespace java::util
{
	class Vector;
}

namespace java::util
{
	class Observable : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Observable(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Observable(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		Observable();
		
		// Methods
		void addObserver(JObject arg0) const;
		jint countObservers() const;
		void deleteObserver(JObject arg0) const;
		void deleteObservers() const;
		jboolean hasChanged() const;
		void notifyObservers() const;
		void notifyObservers(JObject arg0) const;
	};
} // namespace java::util

