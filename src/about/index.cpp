#include "index.hpp"
#include "misc/html_text.hpp"

#include <Wt/WText>
#include <Wt/WVBoxLayout>
#include <Wt/WBreak>

char const * const about::PATH{ "/about" };

about::about()
{
  layout_->setSpacing(0);
  layout_->setContentsMargins(0, 0, 0, 0);
  setLayout(layout_);
  setStyleClass("content");

  auto body_container(new WContainerWidget());
  body_container->setStyleClass("about");
  auto body_layout(new WVBoxLayout());
  body_layout->setSpacing(0);
  body_container->setLayout(body_layout);
  layout_->addWidget(body_container);
  body_layout->addWidget(new html_text{ "content/about/index.html" });

  layout_->addWidget(sidebar_);
}
