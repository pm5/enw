(function ($) {
  $(window).load(function() {
    $('#enw-movies-navigation').flexslider({
      animation: "slide",
      controlNav: false,
      animationLoop: false,
      slideshow: false,
      itemWidth: 250,
      itemMargin: 5,
      asNavFor: '#enw-movies-slideshow'
    });

    $('#enw-movies-slideshow').flexslider({
      animation: "slide",
      controlNav: false,
      animationLoop: false,
      slideshow: false,
      sync: "#enw-movies-navigation"
    });
  });
})(jQuery);
